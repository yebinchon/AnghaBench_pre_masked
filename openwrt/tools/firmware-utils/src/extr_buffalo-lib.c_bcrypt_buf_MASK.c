
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcrypt_ctx {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcrypt_ctx*) ;
 int FUNC_1 (struct bcrypt_ctx*,unsigned char*,unsigned int,unsigned long) ;
 int FUNC_2 (struct bcrypt_ctx*,unsigned char*,unsigned char*,unsigned long) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned int FUNC_4 (char*) ;

int FUNC_5(unsigned char VAR_2, unsigned char *VAR_3, unsigned char *VAR_4,
        unsigned char *VAR_5, unsigned long VAR_6, int VAR_7)
{
 unsigned char VAR_8[VAR_1 + 1];
 unsigned int VAR_9;
 struct bcrypt_ctx VAR_10;
 int VAR_11;


 VAR_9 = FUNC_4((char *) VAR_3);
 VAR_8[0] = VAR_2;
 FUNC_3(&VAR_8[1], VAR_3, VAR_9);

 VAR_9++;

 VAR_11 = FUNC_1(&VAR_10, VAR_8, VAR_9,
     (VAR_7) ? VAR_6 : VAR_0);
 if (VAR_11)
  return VAR_11;

 FUNC_2(&VAR_10, VAR_4, VAR_5, VAR_6);
 FUNC_0(&VAR_10);

 return 0;
}
