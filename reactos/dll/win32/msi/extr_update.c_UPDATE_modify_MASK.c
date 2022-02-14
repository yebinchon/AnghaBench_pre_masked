
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
typedef int MSIUPDATEVIEW ;
typedef int MSIRECORD ;
typedef int MSIMODIFY ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int ,int *) ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_1, MSIMODIFY VAR_2,
                           MSIRECORD *VAR_3, UINT VAR_4 )
{
    MSIUPDATEVIEW *VAR_5 = (MSIUPDATEVIEW*)VAR_1;

    FUNC_0("%p %d %p\n", VAR_5, VAR_2, VAR_3 );

    return VAR_0;
}
