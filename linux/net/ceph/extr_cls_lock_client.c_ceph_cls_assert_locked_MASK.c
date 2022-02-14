
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct page {int dummy; } ;
struct ceph_osd_request {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_3 ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (int) ;
 struct page** FUNC_3 (int,int ) ;
 int FUNC_4 (void**,int ) ;
 int FUNC_5 (void**,void*,char*,int) ;
 int FUNC_6 (void**,int,int,int) ;
 int FUNC_7 (struct ceph_osd_request*,int,char*,char*) ;
 int FUNC_8 (struct ceph_osd_request*,int,struct page**,int,int ,int,int) ;
 void* FUNC_9 (struct page*) ;
 int FUNC_10 (char*) ;

int FUNC_11(struct ceph_osd_request *VAR_4, int VAR_5,
      char *VAR_6, u8 VAR_7, char *VAR_8, char *VAR_9)
{
 int VAR_10;
 int VAR_11 = FUNC_10(VAR_6);
 int VAR_12 = FUNC_10(VAR_8);
 int VAR_13 = FUNC_10(VAR_9);
 struct page **VAR_14;
 void *VAR_15, *VAR_16;
 int VAR_17;

 VAR_10 = VAR_11 + sizeof(__le32) +
        VAR_12 + sizeof(__le32) +
        VAR_13 + sizeof(__le32) +
        sizeof(u8) + VAR_0;
 if (VAR_10 > VAR_3)
  return -VAR_1;

 VAR_17 = FUNC_7(VAR_4, VAR_5, "lock", "assert_locked");
 if (VAR_17)
  return VAR_17;

 VAR_14 = FUNC_3(1, VAR_2);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_15 = FUNC_9(VAR_14[0]);
 VAR_16 = VAR_15 + VAR_10;


 FUNC_6(&VAR_15, 1, 1,
       VAR_10 - VAR_0);
 FUNC_5(&VAR_15, VAR_16, VAR_6, VAR_11);
 FUNC_4(&VAR_15, VAR_7);
 FUNC_5(&VAR_15, VAR_16, VAR_8, VAR_12);
 FUNC_5(&VAR_15, VAR_16, VAR_9, VAR_13);
 FUNC_2(VAR_15 != VAR_16);

 FUNC_8(VAR_4, VAR_5, VAR_14, VAR_10,
       0, 0, 1);
 return 0;
}
