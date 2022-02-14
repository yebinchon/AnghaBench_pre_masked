
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {int pos; char* data; int size; struct TYPE_4__* next; } ;
typedef TYPE_1__ CHANGE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t const) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int,long long) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (int ,int const,int ) ;
 int FUNC_5 (char*,void*,int) ;
 int FUNC_6 (char*,int const,...) ;
 scalar_t__ FUNC_7 (int ,void*,size_t const) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ,void*,size_t const) ;
 scalar_t__ VAR_8 ;

void FUNC_9(off_t VAR_9, int VAR_10, void *VAR_11)
{
    CHANGE *VAR_12;
    int VAR_13;
    if (VAR_8) {
 VAR_3 = 1;
 if (FUNC_4(VAR_4, VAR_9, 0) != VAR_9)
     FUNC_6("Seek to %lld", (long long)VAR_9);
 if ((VAR_13 = FUNC_8(VAR_4, VAR_11, VAR_10)) == VAR_10)
     return;
 if (VAR_13 < 0)
     FUNC_6("Write %d bytes at %lld", VAR_10, (long long)VAR_9);
 FUNC_2("Wrote %d bytes instead of %d at %lld", VAR_13, VAR_10, (long long)VAR_9);
    }

    VAR_12 = FUNC_0(sizeof(CHANGE));
    VAR_12->pos = VAR_9;
    FUNC_5(VAR_12->data = FUNC_0(VAR_12->size = VAR_10), VAR_11, VAR_10);
    VAR_12->next = ((void*)0);
    if (VAR_6)
 VAR_6->next = VAR_12;
    else
 VAR_2 = VAR_12;
    VAR_6 = VAR_12;
}
