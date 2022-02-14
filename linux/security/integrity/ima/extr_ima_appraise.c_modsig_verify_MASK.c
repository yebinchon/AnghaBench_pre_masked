
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modsig {int dummy; } ;
typedef enum integrity_status { ____Placeholder_integrity_status } integrity_status ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct modsig const*) ;

__attribute__((used)) static int FUNC_2(enum ima_hooks VAR_6, const struct modsig *VAR_7,
    enum integrity_status *VAR_8, const char **VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_2, VAR_7);
 if (FUNC_0(VAR_0) && VAR_10 &&
     VAR_6 == VAR_5)
  VAR_10 = FUNC_1(VAR_3,
          VAR_7);
 if (VAR_10) {
  *VAR_9 = "invalid-signature";
  *VAR_8 = VAR_1;
 } else {
  *VAR_8 = VAR_4;
 }

 return VAR_10;
}
