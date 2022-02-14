
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,void*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int,void*,int ) ;
 int FUNC_2 (int,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_3 (int,int ,char*) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static int FUNC_5(int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_4(VAR_10, VAR_11, VAR_12);
 if (VAR_13 == -1)
  FUNC_3(1, VAR_9, "socket t");

 FUNC_2(VAR_13, VAR_2, VAR_3, 1 << 21);
 if (VAR_8)
  FUNC_2(VAR_13, VAR_2, VAR_4, 1);

 if (VAR_10 != VAR_0 && VAR_10 != VAR_1)
  if (FUNC_1(VAR_13, (void *) &VAR_6, VAR_5))
   FUNC_3(1, VAR_9, "connect");

 if (VAR_10 == VAR_1) {
  if (FUNC_0(VAR_13, (void *) &VAR_7, VAR_5))
   FUNC_3(1, VAR_9, "bind");
 }

 return VAR_13;
}
