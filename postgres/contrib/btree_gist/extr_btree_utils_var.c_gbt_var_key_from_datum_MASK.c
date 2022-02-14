
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
typedef scalar_t__ int32 ;
typedef int GBT_VARKEY ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct varlena const*) ;
 int FUNC_3 (int ,struct varlena const*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static GBT_VARKEY *
FUNC_5(const struct varlena *VAR_1)
{
 int32 VAR_2 = FUNC_2(VAR_1);
 GBT_VARKEY *VAR_3;

 VAR_3 = (GBT_VARKEY *) FUNC_4(VAR_2 + VAR_0);
 FUNC_3(FUNC_1(VAR_3), VAR_1, VAR_2);
 FUNC_0(VAR_3, VAR_2 + VAR_0);

 return VAR_3;
}
