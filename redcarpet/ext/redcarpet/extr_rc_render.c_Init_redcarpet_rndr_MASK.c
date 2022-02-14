
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,char*,void*) ;
 int FUNC_2 (void*,char*,int ,int) ;
 void* FUNC_3 (void*,char*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_4()
{
 VAR_5 = FUNC_3(VAR_4, "Render");

 VAR_1 = FUNC_1(VAR_5, "Base", VAR_0);
 FUNC_0(VAR_1, VAR_9);
 FUNC_2(VAR_1, "initialize", VAR_10, 0);

 VAR_2 = FUNC_1(VAR_5, "HTML", VAR_1);
 FUNC_2(VAR_2, "initialize", VAR_7, -1);

 VAR_3 = FUNC_1(VAR_5, "HTML_TOC", VAR_1);
 FUNC_2(VAR_3, "initialize", VAR_8, -1);

 VAR_6 = FUNC_3(VAR_5, "SmartyPants");
 FUNC_2(VAR_6, "postprocess", VAR_11, 1);
}
