
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct option* FUNC_0 (int) ;
 int FUNC_1 (struct option*,struct option const*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct option*,int,int,int ) ;

__attribute__((used)) static struct option *FUNC_3(const struct option *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 const struct option *VAR_5 = VAR_2;
 struct option *VAR_6;

 for (VAR_5 = VAR_2; VAR_5->type != VAR_0; VAR_5++)
  ++VAR_3;

 VAR_4 = sizeof(*VAR_5) * (VAR_3 + 1);
 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6)
  goto out;
 FUNC_1(VAR_6, VAR_2, VAR_4);

 FUNC_2(VAR_6, VAR_3, sizeof(*VAR_5), VAR_1);
out:
 return VAR_6;
}
