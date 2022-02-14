
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct enc_param {unsigned char* magic; unsigned char seed; unsigned char* product; unsigned char* version; int datalen; int csum; int longstate; int key; } ;
typedef unsigned long ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char,int ,unsigned char*,unsigned char*,int,int ) ;
 int FUNC_3 (int,unsigned char*,int) ;
 int FUNC_4 (unsigned char*) ;
 void* FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;

int FUNC_7(struct enc_param *VAR_3, unsigned char *VAR_4,
  unsigned long VAR_5)
{
 unsigned char *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 ssize_t VAR_11;
 int VAR_12;
 int VAR_13 = -1;
 VAR_11 = VAR_5;
 VAR_6 = VAR_4;

 do { VAR_9 = (VAR_0); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_12 = FUNC_4(VAR_6);
 if (VAR_12)
  goto out;
 FUNC_6(VAR_3->magic, VAR_6, VAR_0);
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (1); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_3->seed = *VAR_6;
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (sizeof(uint32_t)); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 > VAR_1)
  goto out;
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (VAR_7); if (VAR_11 < VAR_9) { goto out; } } while (0);
 FUNC_6(VAR_3->product, VAR_6, VAR_7);
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (sizeof(uint32_t)); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 > VAR_2)
  goto out;
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (VAR_8); if (VAR_11 < VAR_9) { goto out; } } while (0);
 FUNC_6(VAR_3->version, VAR_6, VAR_8);
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (sizeof(uint32_t)); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_3->datalen = FUNC_5(VAR_6);
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);


 do { VAR_9 = (VAR_3->datalen); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_12 = FUNC_2(VAR_3->version[0], VAR_3->key, VAR_6, VAR_4, VAR_3->datalen,
    VAR_3->longstate);
 if (VAR_12)
  goto out;
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 do { VAR_9 = (sizeof(uint32_t)); if (VAR_11 < VAR_9) { goto out; } } while (0);
 VAR_3->csum = FUNC_5(VAR_6);
 do { VAR_6 += VAR_9; VAR_11 -= VAR_9; } while (0);

 VAR_10 = FUNC_3(VAR_3->datalen, VAR_4, VAR_3->datalen);
 if (VAR_10 != VAR_3->csum)
  goto out;


 VAR_12 = FUNC_2(VAR_3->product[0], VAR_3->key, VAR_3->version, VAR_3->version,
    VAR_8, VAR_3->longstate);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_2(VAR_3->seed, VAR_3->key, VAR_3->product, VAR_3->product, VAR_7,
    VAR_3->longstate);
 if (VAR_12)
  goto out;

 VAR_13 = 0;
out:
 return VAR_13;



}
