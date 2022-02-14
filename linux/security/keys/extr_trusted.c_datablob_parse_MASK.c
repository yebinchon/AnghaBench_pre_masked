
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct trusted_key_payload {long key_len; int blob_len; int blob; } ;
struct trusted_key_options {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;




 int FUNC_0 (char*,struct trusted_key_payload*,struct trusted_key_options*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_2 (char*,int,long*) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_6, struct trusted_key_payload *VAR_7,
     struct trusted_key_options *VAR_8)
{
 substring_t VAR_9[VAR_3];
 long VAR_10;
 int VAR_11 = -VAR_0;
 int VAR_12;
 char *VAR_13;


 VAR_13 = FUNC_5(&VAR_6, " \t");
 if (!VAR_13)
  return -VAR_0;
 VAR_12 = FUNC_3(VAR_13, VAR_5, VAR_9);
 switch (VAR_12) {
 case 129:

  VAR_13 = FUNC_5(&VAR_6, " \t");
  if (!VAR_13)
   return -VAR_0;
  VAR_11 = FUNC_2(VAR_13, 10, &VAR_10);
  if (VAR_11 < 0 || VAR_10 < VAR_4 || VAR_10 > VAR_2)
   return -VAR_0;
  VAR_7->key_len = VAR_10;
  VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 = 129;
  break;
 case 130:

  VAR_13 = FUNC_5(&VAR_6, " \t");
  if (!VAR_13)
   return -VAR_0;
  VAR_7->blob_len = FUNC_4(VAR_13) / 2;
  if (VAR_7->blob_len > VAR_1)
   return -VAR_0;
  VAR_11 = FUNC_1(VAR_7->blob, VAR_13, VAR_7->blob_len);
  if (VAR_11 < 0)
   return -VAR_0;
  VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 = 130;
  break;
 case 128:

  VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 = 128;
  break;
 case 131:
  return -VAR_0;
  break;
 }
 return VAR_11;
}
