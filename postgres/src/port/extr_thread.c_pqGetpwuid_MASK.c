
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;


 int VAR_0 ;
 struct passwd* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct passwd*,char*,size_t,struct passwd**) ;

int
FUNC_2(uid_t VAR_1, struct passwd *VAR_2, char *VAR_3,
     size_t VAR_4, struct passwd **VAR_5)
{




 VAR_0 = 0;
 *VAR_5 = FUNC_0(VAR_1);

 return (*VAR_5 == ((void*)0)) ? VAR_0 : 0;

}
