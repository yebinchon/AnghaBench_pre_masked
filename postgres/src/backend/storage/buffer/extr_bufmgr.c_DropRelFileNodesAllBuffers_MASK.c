
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int rnode; } ;
struct TYPE_12__ {TYPE_1__ tag; } ;
struct TYPE_11__ {scalar_t__ backend; int node; } ;
typedef TYPE_2__ RelFileNodeBackend ;
typedef int RelFileNode ;
typedef TYPE_3__ BufferDesc ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int * FUNC_7 (void const*,int *,int,int,int ) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,int ) ;
 int VAR_3 ;

void
FUNC_11(RelFileNodeBackend *VAR_4, int VAR_5)
{
 int VAR_6,
    VAR_7 = 0;
 RelFileNode *VAR_8;
 bool VAR_9;

 if (VAR_5 == 0)
  return;

 VAR_8 = FUNC_8(sizeof(RelFileNode) * VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  if (FUNC_4(VAR_4[VAR_6]))
  {
   if (VAR_4[VAR_6].backend == VAR_1)
    FUNC_0(VAR_4[VAR_6].node);
  }
  else
   VAR_8[VAR_7++] = VAR_4[VAR_6].node;
 }





 if (VAR_7 == 0)
 {
  FUNC_9(VAR_8);
  return;
 }







 VAR_9 = VAR_7 > VAR_0;


 if (VAR_9)
  FUNC_10(VAR_8, VAR_7, sizeof(RelFileNode), VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  RelFileNode *VAR_10 = ((void*)0);
  BufferDesc *VAR_11 = FUNC_1(VAR_6);
  uint32 VAR_12;






  if (!VAR_9)
  {
   int VAR_13;

   for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   {
    if (FUNC_5(VAR_11->tag.rnode, VAR_8[VAR_13]))
    {
     VAR_10 = &VAR_8[VAR_13];
     break;
    }
   }
  }
  else
  {
   VAR_10 = FUNC_7((const void *) &(VAR_11->tag.rnode),
       VAR_8, VAR_7, sizeof(RelFileNode),
       VAR_3);
  }


  if (VAR_10 == ((void*)0))
   continue;

  VAR_12 = FUNC_3(VAR_11);
  if (FUNC_5(VAR_11->tag.rnode, (*VAR_10)))
   FUNC_2(VAR_11);
  else
   FUNC_6(VAR_11, VAR_12);
 }

 FUNC_9(VAR_8);
}
