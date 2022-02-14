
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;
struct calipso_doi {int doi; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct calipso_doi*,struct netlbl_audit*) ;
 int FUNC_1 (struct calipso_doi*) ;
 struct calipso_doi* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct genl_info *VAR_4,
       struct netlbl_audit *VAR_5)
{
 int VAR_6;
 struct calipso_doi *VAR_7 = ((void*)0);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->type = VAR_0;
 VAR_7->doi = FUNC_3(VAR_4->attrs[VAR_3]);
 VAR_6 = FUNC_0(VAR_7, VAR_5);
 if (VAR_6 != 0)
  FUNC_1(VAR_7);

 return VAR_6;
}
