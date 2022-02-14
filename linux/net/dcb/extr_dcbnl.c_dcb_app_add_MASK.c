
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcb_app_type {int ifindex; int list; int app; } ;
struct dcb_app {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dcb_app_type* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct dcb_app const*,int) ;

__attribute__((used)) static int FUNC_3(const struct dcb_app *VAR_3, int VAR_4)
{
 struct dcb_app_type *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->app, VAR_3, sizeof(*VAR_3));
 VAR_5->ifindex = VAR_4;
 FUNC_1(&VAR_5->list, &VAR_2);

 return 0;
}
