
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
typedef int MSIRECORD ;
typedef int MSIMODIFY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int,int *) ;
 int FUNC_1 (struct tagMSIVIEW*,int ) ;
 int FUNC_2 (struct tagMSIVIEW*,int *,int,int ) ;
 int FUNC_3 (char*,struct tagMSIVIEW*,int,int *) ;
 int FUNC_4 (struct tagMSIVIEW*,int *) ;
 int FUNC_5 (struct tagMSIVIEW*,int *) ;

__attribute__((used)) static UINT FUNC_6(struct tagMSIVIEW *VAR_3, MSIMODIFY VAR_4, MSIRECORD *VAR_5, UINT VAR_6)
{
    UINT VAR_7;

    FUNC_3("%p %d %p\n", VAR_3, VAR_4, VAR_5);

    switch (VAR_4)
    {
    case 139:
        VAR_7 = FUNC_4(VAR_3, VAR_5);
        break;

    case 137:
        VAR_7 = FUNC_2(VAR_3, VAR_5, -1, VAR_2);
        break;

    case 132:
        VAR_7 = FUNC_5(VAR_3, VAR_5);
        break;

    case 138:
        VAR_7 = FUNC_1(VAR_3, VAR_6 - 1);
        break;

    case 128:
    case 136:
    case 134:
    case 133:
    case 135:
    case 131:
    case 129:
    case 130:
        FUNC_0("%p %d %p - mode not implemented\n", VAR_3, VAR_4, VAR_5 );
        VAR_7 = VAR_0;
        break;

    default:
        VAR_7 = VAR_1;
    }

    return VAR_7;
}
