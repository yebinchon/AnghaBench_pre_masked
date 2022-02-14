
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cHandleEntries; } ;
struct TYPE_9__ {int generation; struct TYPE_9__* ptr; } ;
struct TYPE_8__ {int nb_handles; int allocated_handles; TYPE_2__* handles; TYPE_2__* freelist; } ;
typedef TYPE_1__* PUSER_HANDLE_TABLE ;
typedef TYPE_2__* PUSER_HANDLE_ENTRY ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) __inline static PUSER_HANDLE_ENTRY FUNC_6(PUSER_HANDLE_TABLE VAR_3)
{
   PUSER_HANDLE_ENTRY VAR_4;
   FUNC_2("handles used %lu\n", VAR_2->cHandleEntries);

   if (VAR_3->freelist)
   {
      VAR_4 = VAR_3->freelist;
      VAR_3->freelist = VAR_4->ptr;

      VAR_2->cHandleEntries++;
      return VAR_4;
   }

   if (VAR_3->nb_handles >= VAR_3->allocated_handles)
   {
       FUNC_1("Out of user handles! Used -> %lu, NM_Handle -> %d\n", VAR_2->cHandleEntries, VAR_3->nb_handles);





      return ((void*)0);
   }

   VAR_4 = &VAR_3->handles[VAR_3->nb_handles++];

   VAR_4->generation = 1;

   VAR_2->cHandleEntries++;

   return VAR_4;
}
