
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int dummy; } ;
typedef int bdaddr_t ;


 struct hidp_session* FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hidp_session*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct hidp_session *FUNC_4(const bdaddr_t *VAR_1)
{
 struct hidp_session *VAR_2;

 FUNC_1(&VAR_0);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_2);

 FUNC_3(&VAR_0);

 return VAR_2;
}
