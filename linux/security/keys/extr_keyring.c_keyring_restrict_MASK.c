
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int key; struct key_type* (* lookup_restriction ) (char const*) ;} ;
struct key_restriction {int key; struct key_type* (* lookup_restriction ) (char const*) ;} ;
struct key {int sem; struct key_type* restrict_link; int * type; } ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct key_type*) ;
 int FUNC_1 (struct key_type*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (int ) ;
 struct key* FUNC_5 (int ) ;
 int VAR_4 ;
 struct key_type* FUNC_6 (char const*) ;
 int FUNC_7 (struct key_type*) ;
 scalar_t__ FUNC_8 (struct key*,struct key_type*) ;
 struct key_type* FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (struct key_type*) ;
 int VAR_6 ;
 struct key_type* FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;

int FUNC_13(key_ref_t VAR_7, const char *VAR_8,
       const char *VAR_9)
{
 struct key *VAR_10;
 struct key_type *VAR_11 = ((void*)0);
 struct key_restriction *VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_5(VAR_7);
 FUNC_3(VAR_10);

 if (VAR_10->type != &VAR_4)
  return -VAR_3;

 if (!VAR_8) {
  VAR_12 = FUNC_9(VAR_6);
 } else {
  VAR_11 = FUNC_6(VAR_8);

  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);

  if (!VAR_11->lookup_restriction) {
   VAR_13 = -VAR_2;
   goto error;
  }

  VAR_12 = VAR_11->lookup_restriction(VAR_9);
 }

 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_1(VAR_12);
  goto error;
 }

 FUNC_2(&VAR_10->sem);
 FUNC_2(&VAR_5);

 if (VAR_10->restrict_link)
  VAR_13 = -VAR_1;
 else if (FUNC_8(VAR_10, VAR_12))
  VAR_13 = -VAR_0;
 else
  VAR_10->restrict_link = VAR_12;

 FUNC_12(&VAR_5);
 FUNC_12(&VAR_10->sem);

 if (VAR_13 < 0) {
  FUNC_4(VAR_12->key);
  FUNC_10(VAR_12);
 }

error:
 if (VAR_11)
  FUNC_7(VAR_11);

 return VAR_13;
}
