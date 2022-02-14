
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rp_name; int rp_time; } ;
typedef TYPE_1__ xl_restore_point ;
typedef int uint32 ;
typedef int XLogRecPtr ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char const*,int ,int ) ;
 int FUNC_6 (int ,char const*,int ) ;

XLogRecPtr
FUNC_7(const char *VAR_4)
{
 XLogRecPtr VAR_5;
 xl_restore_point VAR_6;

 VAR_6.rp_time = FUNC_0();
 FUNC_6(VAR_6.rp_name, VAR_4, VAR_1);

 FUNC_1();
 FUNC_3((char *) &VAR_6, sizeof(xl_restore_point));

 VAR_5 = FUNC_2(VAR_2, VAR_3);

 FUNC_4(VAR_0,
   (FUNC_5("restore point \"%s\" created at %X/%X",
     VAR_4, (uint32) (VAR_5 >> 32), (uint32) VAR_5)));

 return VAR_5;
}
