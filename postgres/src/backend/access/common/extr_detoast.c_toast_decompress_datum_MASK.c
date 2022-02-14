
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct varlena*,scalar_t__) ;
 int FUNC_2 (struct varlena*) ;
 scalar_t__ FUNC_3 (struct varlena*) ;
 int FUNC_4 (struct varlena*) ;
 int FUNC_5 (struct varlena*) ;
 int FUNC_6 (struct varlena*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int ,scalar_t__,int) ;

__attribute__((used)) static struct varlena *
FUNC_10(struct varlena *VAR_2)
{
 struct varlena *VAR_3;

 FUNC_0(FUNC_5(VAR_2));

 VAR_3 = (struct varlena *)
  FUNC_8(FUNC_3(VAR_2) + VAR_1);
 FUNC_1(VAR_3, FUNC_3(VAR_2) + VAR_1);

 if (FUNC_9(FUNC_2(VAR_2),
      FUNC_4(VAR_2),
      FUNC_6(VAR_3),
      FUNC_3(VAR_2), 1) < 0)
  FUNC_7(VAR_0, "compressed data is corrupted");

 return VAR_3;
}
