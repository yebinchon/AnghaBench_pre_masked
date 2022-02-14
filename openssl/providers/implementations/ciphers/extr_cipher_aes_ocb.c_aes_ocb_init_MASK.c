
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int enc; size_t ivlen; size_t keylen; TYPE_1__* hw; } ;
struct TYPE_6__ {TYPE_3__ base; int iv_state; } ;
struct TYPE_5__ {int (* init ) (TYPE_3__*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ PROV_AES_OCB_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_3__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_3(void *VAR_6, const unsigned char *VAR_7, size_t VAR_8,
                        const unsigned char *VAR_9, size_t VAR_10, int VAR_11)
{
   PROV_AES_OCB_CTX *VAR_12 = (PROV_AES_OCB_CTX *)VAR_6;

   VAR_12->base.enc = VAR_11;

   if (VAR_9 != ((void*)0)) {
       if (VAR_10 != VAR_12->base.ivlen) {

           if (VAR_10 < VAR_3 || VAR_10 > VAR_2) {
               FUNC_0(VAR_0, VAR_4);
               return 0;
           }
           VAR_12->base.ivlen = VAR_10;
       }
       if (!FUNC_1(&VAR_12->base, VAR_9, VAR_10))
           return 0;
       VAR_12->iv_state = VAR_1;
   }
   if (VAR_7 != ((void*)0)) {
       if (VAR_8 != VAR_12->base.keylen) {
           FUNC_0(VAR_0, VAR_5);
           return 0;
       }
       return VAR_12->base.hw->init(&VAR_12->base, VAR_7, VAR_8);
   }
   return 1;
}
