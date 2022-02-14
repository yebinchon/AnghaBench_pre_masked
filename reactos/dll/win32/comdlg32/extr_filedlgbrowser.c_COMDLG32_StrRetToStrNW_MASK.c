
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int mkid; } ;
struct TYPE_8__ {scalar_t__ uOffset; scalar_t__ cStr; int pOleStr; } ;
struct TYPE_9__ {int uType; TYPE_1__ u; } ;
typedef char* LPWSTR ;
typedef int LPVOID ;
typedef TYPE_2__* LPSTRRET ;
typedef scalar_t__ LPCSTR ;
typedef TYPE_3__* LPCITEMIDLIST ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int ,int ) ;



 int FUNC_3 (char*,int ,int ,TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_5 (LPVOID VAR_3, DWORD VAR_4, LPSTRRET VAR_5, LPCITEMIDLIST VAR_6)
{
        FUNC_3("dest=%p len=0x%x strret=%p pidl=%p\n", VAR_3 , VAR_4, VAR_5, VAR_6);

 switch (VAR_5->uType)
 {
   case 128:
            FUNC_4(VAR_3, VAR_5->u.pOleStr, VAR_4);
     FUNC_0(VAR_5->u.pOleStr);
     break;

   case 130:
            if (VAR_4 && !FUNC_2( VAR_0, 0, VAR_5->u.cStr, -1, VAR_3, VAR_4 ))
                ((LPWSTR)VAR_3)[VAR_4-1] = 0;
     break;

   case 129:
     if (VAR_6)
     {
                if (VAR_4 && !FUNC_2( VAR_0, 0, ((LPCSTR)&VAR_6->mkid)+VAR_5->u.uOffset,
                                                 -1, VAR_3, VAR_4 ))
                    ((LPWSTR)VAR_3)[VAR_4-1] = 0;
     }
     break;

   default:
     FUNC_1("unknown type!\n");
     if (VAR_4)
     { *(LPWSTR)VAR_3 = '\0';
     }
     return(VAR_1);
 }
        return VAR_2;
}
