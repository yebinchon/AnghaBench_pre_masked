
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,int ,unsigned int*) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, int VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_5, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_8, VAR_1, &VAR_7);
 if (VAR_9 < 0) {
  VAR_10 = VAR_4;
  FUNC_0(VAR_8);
  VAR_4 = VAR_10;
  return VAR_9;
 }

 if (VAR_6)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;

 VAR_9 = FUNC_1(VAR_8, VAR_2, &VAR_7);
 VAR_10 = VAR_4;
 FUNC_0(VAR_8);
 VAR_4 = VAR_10;
 return VAR_9;
}
