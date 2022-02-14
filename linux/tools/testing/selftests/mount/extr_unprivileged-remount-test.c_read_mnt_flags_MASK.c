
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int f_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,...) ;
 int VAR_17 ;
 int FUNC_1 (char const*,struct statvfs*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_18)
{
 int VAR_19;
 struct statvfs VAR_20;
 int VAR_21;

 VAR_19 = FUNC_1(VAR_18, &VAR_20);
 if (VAR_19 != 0) {
  FUNC_0("statvfs of %s failed: %s\n",
   VAR_18, FUNC_2(VAR_17));
 }
 if (VAR_20.f_flag & ~(VAR_14 | VAR_13 | VAR_10 | VAR_12 | VAR_9 | VAR_11 | VAR_15 | VAR_16 | VAR_8)) {


  FUNC_0("Unrecognized mount flags\n");
 }
 VAR_21 = 0;
 if (VAR_20.f_flag & VAR_14)
  VAR_21 |= VAR_5;
 if (VAR_20.f_flag & VAR_13)
  VAR_21 |= VAR_4;
 if (VAR_20.f_flag & VAR_10)
  VAR_21 |= VAR_1;
 if (VAR_20.f_flag & VAR_12)
  VAR_21 |= VAR_3;
 if (VAR_20.f_flag & VAR_9)
  VAR_21 |= VAR_0;
 if (VAR_20.f_flag & VAR_11)
  VAR_21 |= VAR_2;
 if (VAR_20.f_flag & VAR_15)
  VAR_21 |= VAR_6;
 if (VAR_20.f_flag & VAR_16)
  VAR_21 |= VAR_7;
 if (VAR_20.f_flag & VAR_8)
  VAR_21 |= VAR_8;

 return VAR_21;
}
