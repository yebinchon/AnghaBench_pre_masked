
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udmabuf_create {int memfd; int offset; int size; } ;
typedef void* off_t ;
typedef int create ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ,struct udmabuf_create*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct udmabuf_create*,int ,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,char*) ;
 int VAR_7 ;

int FUNC_11(int VAR_8, char *VAR_9[])
{
 struct udmabuf_create VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 off_t VAR_15;
 void *VAR_16;

 VAR_11 = FUNC_9("/dev/udmabuf", VAR_4);
 if (VAR_11 < 0) {
  FUNC_10("%s: [skip,no-udmabuf]\n", VAR_5);
  FUNC_1(77);
 }

 VAR_12 = FUNC_7("udmabuf-test", VAR_2);
 if (VAR_12 < 0) {
  FUNC_10("%s: [skip,no-memfd]\n", VAR_5);
  FUNC_1(77);
 }

 VAR_14 = FUNC_2(VAR_12, VAR_0, VAR_1);
 if (VAR_14 < 0) {
  FUNC_10("%s: [skip,fcntl-add-seals]\n", VAR_5);
  FUNC_1(77);
 }


 VAR_15 = FUNC_5() * VAR_3;
 VAR_14 = FUNC_4(VAR_12, VAR_15);
 if (VAR_14 == -1) {
  FUNC_10("%s: [FAIL,memfd-truncate]\n", VAR_5);
  FUNC_1(1);
 }

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));


 VAR_10.memfd = VAR_12;
 VAR_10.offset = FUNC_5()/2;
 VAR_10.size = FUNC_5();
 VAR_13 = FUNC_6(VAR_11, VAR_6, &VAR_10);
 if (VAR_13 >= 0) {
  FUNC_10("%s: [FAIL,test-1]\n", VAR_5);
  FUNC_1(1);
 }


 VAR_10.memfd = VAR_12;
 VAR_10.offset = 0;
 VAR_10.size = FUNC_5()/2;
 VAR_13 = FUNC_6(VAR_11, VAR_6, &VAR_10);
 if (VAR_13 >= 0) {
  FUNC_10("%s: [FAIL,test-2]\n", VAR_5);
  FUNC_1(1);
 }


 VAR_10.memfd = 0;
 VAR_10.offset = 0;
 VAR_10.size = VAR_15;
 VAR_13 = FUNC_6(VAR_11, VAR_6, &VAR_10);
 if (VAR_13 >= 0) {
  FUNC_10("%s: [FAIL,test-3]\n", VAR_5);
  FUNC_1(1);
 }


 VAR_10.memfd = VAR_12;
 VAR_10.offset = 0;
 VAR_10.size = VAR_15;
 VAR_13 = FUNC_6(VAR_11, VAR_6, &VAR_10);
 if (VAR_13 < 0) {
  FUNC_10("%s: [FAIL,test-4]\n", VAR_5);
  FUNC_1(1);
 }

 FUNC_3(VAR_7, "%s: ok\n", VAR_5);
 FUNC_0(VAR_13);
 FUNC_0(VAR_12);
 FUNC_0(VAR_11);
 return 0;
}
