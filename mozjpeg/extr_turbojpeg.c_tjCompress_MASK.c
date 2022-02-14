
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 unsigned long FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,unsigned char*,int,int,int,int ,unsigned char**,unsigned long*,int,int,int) ;
 int FUNC_3 (int ,unsigned char*,int,int,int,int ,unsigned char*,int,int) ;

int FUNC_4(tjhandle VAR_2, unsigned char *VAR_3, int VAR_4,
                         int VAR_5, int VAR_6, int VAR_7,
                         unsigned char *VAR_8, unsigned long *VAR_9,
                         int VAR_10, int VAR_11, int VAR_12)
{
  int VAR_13 = 0;
  unsigned long VAR_14;

  if (VAR_12 & VAR_1) {
  VAR_14=FUNC_1(VAR_4, VAR_6, VAR_10);
  VAR_13=FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                          FUNC_0(VAR_7, VAR_12), VAR_8,
                          VAR_10, VAR_12);
  } else {
  VAR_13=FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                         FUNC_0(VAR_7, VAR_12), &VAR_8, &VAR_14,
                         VAR_10, VAR_11, VAR_12 | VAR_0);
 }
 *VAR_9=VAR_14;
 return VAR_13;
}
