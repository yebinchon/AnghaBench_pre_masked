
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct enc_param {unsigned char seed; size_t datalen; size_t csum; int longstate; int key; scalar_t__ version; scalar_t__ product; scalar_t__ magic; } ;


 int FUNC_0 (unsigned char,int ,unsigned char*,unsigned char*,size_t,int ) ;
 int FUNC_1 (unsigned char*,scalar_t__,size_t) ;
 int FUNC_2 (unsigned char*,size_t) ;
 size_t FUNC_3 (char*) ;

int FUNC_4(struct enc_param *VAR_0, unsigned char *VAR_1,
  unsigned char *VAR_2)
{
 unsigned char *VAR_3;
 uint32_t VAR_4;
 int VAR_5;
 int VAR_6 = -1;
 unsigned char VAR_7;

 VAR_3 = (unsigned char *) VAR_1;


 VAR_4 = FUNC_3((char *) VAR_0->magic) + 1;
 FUNC_1(VAR_3, VAR_0->magic, VAR_4);
 VAR_3 += VAR_4;


 *VAR_3++ = VAR_0->seed;


 VAR_4 = FUNC_3((char *) VAR_0->product) + 1;
 FUNC_2(VAR_3, VAR_4);
 VAR_3 += sizeof(uint32_t);


 FUNC_1(VAR_3, VAR_0->product, VAR_4);
 VAR_5 = FUNC_0(VAR_0->seed, VAR_0->key, VAR_3, VAR_3, VAR_4, VAR_0->longstate);
 if (VAR_5)
  goto out;
 VAR_7 = *VAR_3;
 VAR_3 += VAR_4;


 VAR_4 = FUNC_3((char *) VAR_0->version) + 1;
 FUNC_2(VAR_3, VAR_4);
 VAR_3 += sizeof(uint32_t);


 FUNC_1(VAR_3, VAR_0->version, VAR_4);
 VAR_5 = FUNC_0(VAR_7, VAR_0->key, VAR_3, VAR_3, VAR_4, VAR_0->longstate);
 if (VAR_5)
  goto out;
 VAR_7 = *VAR_3;
 VAR_3 += VAR_4;


 FUNC_2(VAR_3, VAR_0->datalen);


 VAR_5 = FUNC_0(VAR_7, VAR_0->key, VAR_2, VAR_2, VAR_0->datalen, VAR_0->longstate);
 if (VAR_5)
  goto out;


 FUNC_2(&VAR_2[VAR_0->datalen], VAR_0->csum);

 VAR_6 = 0;

out:
 return VAR_6;
}
