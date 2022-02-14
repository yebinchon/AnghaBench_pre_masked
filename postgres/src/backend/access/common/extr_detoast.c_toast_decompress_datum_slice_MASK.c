
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
typedef scalar_t__ int32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct varlena*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct varlena*) ;
 int FUNC_3 (struct varlena*) ;
 int FUNC_4 (struct varlena*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (struct varlena*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,scalar_t__,int) ;

__attribute__((used)) static struct varlena *
FUNC_9(struct varlena *VAR_3, int32 VAR_4)
{
 struct varlena *VAR_5;
 int32 VAR_6;

 FUNC_0(FUNC_3(VAR_3));

 VAR_5 = (struct varlena *) FUNC_7(VAR_4 + VAR_2);

 VAR_6 = FUNC_8(FUNC_2(VAR_3),
         FUNC_5(VAR_3) - VAR_1,
         FUNC_4(VAR_5),
         VAR_4, 0);
 if (VAR_6 < 0)
  FUNC_6(VAR_0, "compressed data is corrupted");

 FUNC_1(VAR_5, VAR_6 + VAR_2);
 return VAR_5;
}
