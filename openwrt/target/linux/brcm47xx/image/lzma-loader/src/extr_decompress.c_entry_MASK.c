
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trx_header {scalar_t__ magic; int* offsets; } ;
struct TYPE_3__ {int Read; } ;
typedef TYPE_1__ ILzmaInCallback ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int,unsigned int,unsigned int,TYPE_1__*,unsigned char*,unsigned int,unsigned int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned char* VAR_6 ;
 unsigned int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void FUNC_5 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_9 ;

void FUNC_6(unsigned long VAR_10, unsigned long VAR_11,
 unsigned long VAR_12, unsigned long VAR_13,
 unsigned long VAR_14, unsigned long VAR_15,
 unsigned long VAR_16, unsigned long VAR_17)
{
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;

 ILzmaInCallback VAR_23;
 VAR_23.Read = VAR_8;


 for (VAR_6 = ((unsigned char *) FUNC_0(VAR_0));
  ((struct trx_header *)VAR_6)->magic != VAR_5 &&
  ((struct trx_header *)VAR_6)->magic != VAR_2;
   VAR_6 += 65536);

 if (((struct trx_header *)VAR_6)->magic == VAR_2)
  VAR_6 += VAR_1;

 if (((struct trx_header *)VAR_6)->offsets[1] > 65536)
  VAR_6 += ((struct trx_header *)VAR_6)->offsets[0];
 else
  VAR_6 += ((struct trx_header *)VAR_6)->offsets[1];

 VAR_7 = 0;


 VAR_18 = FUNC_4();
 VAR_19 = VAR_18 % 9, VAR_18 = VAR_18 / 9;
 VAR_20 = VAR_18 % 5, VAR_21 = VAR_18 / 5;


 for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
  FUNC_4();


 VAR_22 = ((unsigned int)FUNC_4()) +
  ((unsigned int)FUNC_4() << 8) +
  ((unsigned int)FUNC_4() << 16) +
  ((unsigned int)FUNC_4() << 24);


 for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
  FUNC_4();


 if (FUNC_1(VAR_9, ~0, VAR_19, VAR_20, VAR_21, &VAR_23,
  (unsigned char*)VAR_3, VAR_22, &VAR_18) == VAR_4)
 {
  FUNC_2(VAR_12, VAR_13);
  FUNC_3(VAR_10, VAR_11);


  ((void (*)(unsigned long, unsigned long, unsigned long,
   unsigned long)) VAR_3)(VAR_14, VAR_15, VAR_16,
    VAR_17);
 }
}
