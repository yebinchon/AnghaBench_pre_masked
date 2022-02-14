
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,unsigned char) ;
 int FUNC_1 (void*,int ,int) ;
 unsigned char VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*) ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_8,
   void *VAR_9, char *VAR_10)
{

 unsigned char VAR_11, VAR_12, VAR_13,
  VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_9, VAR_4, VAR_7);
 FUNC_1(VAR_9, VAR_4, VAR_3);
 FUNC_1(VAR_9, VAR_4, VAR_6);
 FUNC_1(VAR_9, VAR_4, VAR_5);
 FUNC_1(VAR_9, VAR_4, VAR_1);
 FUNC_1(VAR_9, VAR_4, VAR_2);

 FUNC_3(VAR_10, "pci:");
 FUNC_0(VAR_10, "v", VAR_7 != VAR_0, VAR_7);
 FUNC_0(VAR_10, "d", VAR_3 != VAR_0, VAR_3);
 FUNC_0(VAR_10, "sv", VAR_6 != VAR_0, VAR_6);
 FUNC_0(VAR_10, "sd", VAR_5 != VAR_0, VAR_5);

 VAR_11 = (VAR_1) >> 16;
 VAR_14 = (VAR_2) >> 16;
 VAR_12 = (VAR_1) >> 8;
 VAR_15 = (VAR_2) >> 8;
 VAR_13 = VAR_1;
 VAR_16 = VAR_2;

 if ((VAR_14 != 0 && VAR_14 != 0xFF)
     || (VAR_15 != 0 && VAR_15 != 0xFF)
     || (VAR_16 != 0 && VAR_16 != 0xFF)) {
  FUNC_4("Can't handle masks in %s:%04X\n",
       VAR_8, VAR_2);
  return 0;
 }

 FUNC_0(VAR_10, "bc", VAR_14 == 0xFF, VAR_11);
 FUNC_0(VAR_10, "sc", VAR_15 == 0xFF, VAR_12);
 FUNC_0(VAR_10, "i", VAR_16 == 0xFF, VAR_13);
 FUNC_2(VAR_10);
 return 1;
}
