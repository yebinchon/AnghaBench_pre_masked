
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct stat {size_t st_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,struct stat*) ;
 int* FUNC_5 (size_t) ;
 int FUNC_6 (int*,int ,size_t) ;
 int FUNC_7 (char*,int,...) ;
 char* VAR_7 ;
 int FUNC_8 (int,int*,size_t) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int*,size_t) ;

int
FUNC_11(int VAR_8, char *VAR_9[])
{
 struct stat VAR_10;
 size_t VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;
 uint8_t *VAR_15;

 VAR_7 = VAR_9[0];

 if (VAR_8 != 3)
  FUNC_9();

 if ((VAR_13 = FUNC_7(VAR_9[1], VAR_4)) == -1)
  FUNC_2(VAR_1, "%s", VAR_9[1]);

 if (FUNC_4(VAR_13, &VAR_10) == -1)
  FUNC_2(VAR_1, "%s", VAR_9[1]);

 VAR_11 = VAR_0 + VAR_10.st_size;

 if ((VAR_15 = FUNC_5(VAR_11)) == ((void*)0))
  FUNC_2(VAR_1, "malloc");

 FUNC_6(VAR_15, 0, VAR_0);
 VAR_15[0x0] = 0x62;
 VAR_15[0x1] = 0x67;
 VAR_15[0x2] = 0x6e;
 VAR_15[0xb] = 0xb1;
 VAR_15[0xc] = (VAR_11 >> 24) & 0xff;
 VAR_15[0xd] = (VAR_11 >> 16) & 0xff;
 VAR_15[0xe] = (VAR_11 >> 8) & 0xff;
 VAR_15[0xf] = VAR_11 & 0xff;

 FUNC_8(VAR_13, &VAR_15[VAR_0], VAR_10.st_size);
 FUNC_1(VAR_13);

 VAR_12 = FUNC_0(VAR_15, VAR_11);
 VAR_15[0x10] = (VAR_12 >> 24) & 0xff;
 VAR_15[0x11] = (VAR_12 >> 16) & 0xff;
 VAR_15[0x12] = (VAR_12 >> 8) & 0xff;
 VAR_15[0x13] = VAR_12 & 0xff;

 if ((VAR_14 = FUNC_7(VAR_9[2], VAR_6 | VAR_3 | VAR_5, 0644)) == -1)
  FUNC_2(VAR_1, "%s", VAR_9[2]);
 FUNC_10(VAR_14, VAR_15, VAR_11);
 FUNC_1(VAR_14);

 FUNC_3(VAR_15);

 return VAR_2;
}
