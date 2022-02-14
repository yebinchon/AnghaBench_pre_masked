
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rate_control_ops {int dummy; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 struct rate_control_ops* FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static const struct rate_control_ops *
FUNC_4(const char *VAR_3)
{
 const struct rate_control_ops *VAR_4;
 const char *VAR_5;

 FUNC_1(VAR_1);
 if (!VAR_3)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_3;

 VAR_4 = FUNC_0(VAR_5);
 if (!VAR_4 && VAR_3)

  VAR_4 = FUNC_0(VAR_2);


 if (!VAR_4 && (FUNC_3(VAR_0) > 0))

  VAR_4 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);

 return VAR_4;
}
