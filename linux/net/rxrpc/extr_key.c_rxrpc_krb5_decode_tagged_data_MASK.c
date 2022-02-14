
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_tagged_data {unsigned int data_len; void* tag; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,unsigned int) ;
 int FUNC_1 (char*,size_t,void*,void*,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int const*,unsigned int,int ) ;
 void* FUNC_4 (int const) ;

__attribute__((used)) static int FUNC_5(struct krb5_tagged_data *VAR_3,
      size_t VAR_4,
      const __be32 **VAR_5,
      unsigned int *VAR_6)
{
 const __be32 *VAR_7 = *VAR_5;
 unsigned int VAR_8 = *VAR_6, VAR_9, VAR_10;


 if (VAR_8 <= 8)
  return -VAR_0;

 FUNC_1(",%zu,{%x,%x},%u",
        VAR_4, FUNC_4(VAR_7[0]), FUNC_4(VAR_7[1]), VAR_8);

 VAR_3->tag = FUNC_4(*VAR_7++);
 VAR_9 = FUNC_4(*VAR_7++);
 VAR_8 -= 8;
 if (VAR_9 > VAR_4)
  return -VAR_0;
 VAR_10 = (VAR_9 + 3) & ~3;
 if (VAR_10 > VAR_8)
  return -VAR_0;
 VAR_3->data_len = VAR_9;

 if (VAR_9 > 0) {
  VAR_3->data = FUNC_3(VAR_7, VAR_9, VAR_2);
  if (!VAR_3->data)
   return -VAR_1;
  VAR_8 -= VAR_10;
  VAR_7 += VAR_10 >> 2;
 }

 FUNC_0("tag %x len %x", VAR_3->tag, VAR_3->data_len);

 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;
 FUNC_2(" = 0 [toklen=%u]", VAR_8);
 return 0;
}
