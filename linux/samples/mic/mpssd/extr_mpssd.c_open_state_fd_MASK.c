
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_info {char* name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*,char*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mic_info *VAR_4)
{
 char VAR_5[VAR_2];
 int VAR_6;

 FUNC_2(VAR_5, VAR_2 - 1, "%s/%s/%s",
   VAR_0, VAR_4->name, "state");

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6 < 0)
  FUNC_0("%s: opening file %s failed %s\n",
   VAR_4->name, VAR_5, FUNC_3(VAR_3));
 return VAR_6;
}
