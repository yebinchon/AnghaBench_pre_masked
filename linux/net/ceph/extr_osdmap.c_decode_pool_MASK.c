
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ceph_pg_pool_info {int size; int min_size; int read_tier; int write_tier; void* last_force_request_resend; void* flags; void* pgp_num; void* pg_num; void* object_hash; void* crush_ruleset; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_pg_pool_info*) ;
 void* FUNC_1 (void**) ;
 void* FUNC_2 (void**) ;
 void* FUNC_3 (void**) ;
 int FUNC_4 (void**,void*,unsigned int,int ) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int FUNC_6(void **VAR_2, void *VAR_3, struct ceph_pg_pool_info *VAR_4)
{
 u8 VAR_5, VAR_6;
 unsigned VAR_7, VAR_8;
 void *VAR_9;

 FUNC_4(VAR_2, VAR_3, 2 + 4, VAR_1);
 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_5 < 5) {
  FUNC_5("got v %d < 5 cv %d of ceph_pg_pool\n", VAR_5, VAR_6);
  return -VAR_0;
 }
 if (VAR_6 > 9) {
  FUNC_5("got v %d cv %d > 9 of ceph_pg_pool\n", VAR_5, VAR_6);
  return -VAR_0;
 }
 VAR_7 = FUNC_1(VAR_2);
 FUNC_4(VAR_2, VAR_3, VAR_7, VAR_1);
 VAR_9 = *VAR_2 + VAR_7;

 VAR_4->type = FUNC_3(VAR_2);
 VAR_4->size = FUNC_3(VAR_2);
 VAR_4->crush_ruleset = FUNC_3(VAR_2);
 VAR_4->object_hash = FUNC_3(VAR_2);

 VAR_4->pg_num = FUNC_1(VAR_2);
 VAR_4->pgp_num = FUNC_1(VAR_2);

 *VAR_2 += 4 + 4;
 *VAR_2 += 4;
 *VAR_2 += 8 + 4;


 VAR_8 = FUNC_1(VAR_2);
 while (VAR_8--) {
  *VAR_2 += 8;
  *VAR_2 += 1 + 1;
  VAR_7 = FUNC_1(VAR_2);
  *VAR_2 += VAR_7;
 }


 VAR_8 = FUNC_1(VAR_2);
 *VAR_2 += VAR_8 * (8 + 8);

 *VAR_2 += 8;
 VAR_4->flags = FUNC_2(VAR_2);
 *VAR_2 += 4;

 if (VAR_5 >= 7)
  VAR_4->min_size = FUNC_3(VAR_2);
 else
  VAR_4->min_size = VAR_4->size - VAR_4->size / 2;

 if (VAR_5 >= 8)
  *VAR_2 += 8 + 8;

 if (VAR_5 >= 9) {

  VAR_8 = FUNC_1(VAR_2);
  *VAR_2 += VAR_8 * 8;

  *VAR_2 += 8;
  *VAR_2 += 1;

  VAR_4->read_tier = FUNC_2(VAR_2);
  VAR_4->write_tier = FUNC_2(VAR_2);
 } else {
  VAR_4->read_tier = -1;
  VAR_4->write_tier = -1;
 }

 if (VAR_5 >= 10) {

  VAR_8 = FUNC_1(VAR_2);
  while (VAR_8--) {
   VAR_7 = FUNC_1(VAR_2);
   *VAR_2 += VAR_7;
   VAR_7 = FUNC_1(VAR_2);
   *VAR_2 += VAR_7;
  }
 }

 if (VAR_5 >= 11) {

  *VAR_2 += 1 + 1;
  VAR_7 = FUNC_1(VAR_2);
  *VAR_2 += VAR_7;

  *VAR_2 += 4;
  *VAR_2 += 4;
 }

 if (VAR_5 >= 12)
  *VAR_2 += 4;

 if (VAR_5 >= 13) {
  *VAR_2 += 8;
  *VAR_2 += 8;
  *VAR_2 += 4;
  *VAR_2 += 4;
  *VAR_2 += 4;
  *VAR_2 += 4;
 }

 if (VAR_5 >= 14) {

  VAR_7 = FUNC_1(VAR_2);
  *VAR_2 += VAR_7;
 }





 if (VAR_5 >= 15)
  VAR_4->last_force_request_resend = FUNC_1(VAR_2);
 else
  VAR_4->last_force_request_resend = 0;

 if (VAR_5 >= 16)
  *VAR_2 += 4;

 if (VAR_5 >= 17)
  *VAR_2 += 8;

 if (VAR_5 >= 19)
  *VAR_2 += 4;

 if (VAR_5 >= 20)
  *VAR_2 += 4;

 if (VAR_5 >= 21)
  *VAR_2 += 1;

 if (VAR_5 >= 22)
  *VAR_2 += 1;

 if (VAR_5 >= 23) {
  *VAR_2 += 4;
  *VAR_2 += 4;
 }

 if (VAR_5 >= 24) {

  *VAR_2 += 1 + 1;
  VAR_7 = FUNC_1(VAR_2);
  *VAR_2 += VAR_7;
 }

 if (VAR_5 >= 25)
  VAR_4->last_force_request_resend = FUNC_1(VAR_2);



 *VAR_2 = VAR_9;
 FUNC_0(VAR_4);
 return 0;

bad:
 return -VAR_0;
}
