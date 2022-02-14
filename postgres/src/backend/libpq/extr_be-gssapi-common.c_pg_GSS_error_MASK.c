
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg_minor ;
typedef int msg_major ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int,int ,int ) ;

void
FUNC_4(int VAR_2, const char *VAR_3,
    OM_uint32 VAR_4, OM_uint32 VAR_5)
{
 char VAR_6[128],
    VAR_7[128];


 FUNC_3(VAR_6, sizeof(VAR_6), VAR_4, VAR_0);


 FUNC_3(VAR_7, sizeof(VAR_7), VAR_5, VAR_1);





 FUNC_0(VAR_2,
   (FUNC_2("%s", VAR_3),
    FUNC_1("%s: %s", VAR_6, VAR_7)));
}
