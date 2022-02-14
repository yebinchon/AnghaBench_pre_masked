
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ,size_t,int ,int,int,int ) ;
 scalar_t__ FUNC_5 (void*,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;

int FUNC_10(int VAR_7, char **VAR_8)
{
 void *VAR_9;
 int VAR_10;
 size_t VAR_11 = VAR_2;
 int VAR_12 = VAR_1;
 int VAR_13 = 0;

 if (VAR_7 > 1)
  VAR_11 = FUNC_1(VAR_8[1]) << 20;
 if (VAR_7 > 2) {
  VAR_13 = FUNC_0(VAR_8[2]);
  if (VAR_13)
   VAR_12 |= (VAR_13 & VAR_4) << VAR_5;
 }

 if (VAR_13)
  FUNC_7("%u kB hugepages\n", 1 << VAR_13);
 else
  FUNC_7("Default size hugepages\n");
 FUNC_7("Mapping %lu Mbytes\n", (unsigned long)VAR_11 >> 20);

 VAR_9 = FUNC_4(VAR_0, VAR_11, VAR_6, VAR_12, -1, 0);
 if (VAR_9 == VAR_3) {
  FUNC_6("mmap");
  FUNC_3(1);
 }

 FUNC_7("Returned address is %p\n", VAR_9);
 FUNC_2(VAR_9);
 FUNC_9(VAR_9);
 VAR_10 = FUNC_8(VAR_9);


 if (FUNC_5(VAR_9, VAR_2)) {
  FUNC_6("munmap");
  FUNC_3(1);
 }

 return VAR_10;
}
