
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**,void*,int,int ) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(void **VAR_4, void *VAR_5,
        const char *VAR_6, u8 *VAR_7)
{
 u8 VAR_8;

 FUNC_1(VAR_4, VAR_5, VAR_8, VAR_3);
 if (VAR_8 >= 7) {
  u8 VAR_9;

  FUNC_1(VAR_4, VAR_5, VAR_9, VAR_3);
  if (VAR_9 > VAR_2) {
   FUNC_2("got v %d cv %d > %d of %s ceph_osdmap\n",
    VAR_8, VAR_9,
    VAR_2, VAR_6);
   return -VAR_0;
  }
  *VAR_4 += 4;

  FUNC_1(VAR_4, VAR_5, VAR_8, VAR_3);
  FUNC_1(VAR_4, VAR_5, VAR_9, VAR_3);
  if (VAR_9 > VAR_1) {
   FUNC_2("got v %d cv %d > %d of %s ceph_osdmap client data\n",
    VAR_8, VAR_9,
    VAR_1, VAR_6);
   return -VAR_0;
  }
  *VAR_4 += 4;
 } else {
  u16 VAR_10;

  *VAR_4 -= 1;
  FUNC_0(VAR_4, VAR_5, VAR_10, VAR_3);
  if (VAR_10 < 6) {
   FUNC_2("got v %d < 6 of %s ceph_osdmap\n",
    VAR_10, VAR_6);
   return -VAR_0;
  }


  VAR_8 = 0;
 }

 *VAR_7 = VAR_8;
 return 0;

e_inval:
 return -VAR_0;
}
