
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Self; void* MaxVal; void* MinVal; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int LRESULT ;
typedef void* INT ;


 int FUNC_0 (char*,void*,void*,int ) ;

__attribute__((used)) static LRESULT FUNC_1(UPDOWN_INFO *VAR_0, INT VAR_1, INT VAR_2)
{
    VAR_0->MaxVal = VAR_1;
    VAR_0->MinVal = VAR_2;

    FUNC_0("UpDown Ctrl new range(%d to %d), hwnd=%p\n",
           VAR_0->MinVal, VAR_0->MaxVal, VAR_0->Self);

    return 0;
}
