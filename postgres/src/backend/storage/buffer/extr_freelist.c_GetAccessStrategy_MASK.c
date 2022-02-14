
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int btype; int ring_size; } ;
typedef int BufferAccessStrategyType ;
typedef TYPE_1__* BufferAccessStrategy ;
typedef int Buffer ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

BufferAccessStrategy
FUNC_4(BufferAccessStrategyType VAR_5)
{
 BufferAccessStrategy VAR_6;
 int VAR_7;







 switch (VAR_5)
 {
  case 129:

   return ((void*)0);

  case 131:
   VAR_7 = 256 * 1024 / VAR_0;
   break;
  case 130:
   VAR_7 = 16 * 1024 * 1024 / VAR_0;
   break;
  case 128:
   VAR_7 = 256 * 1024 / VAR_0;
   break;

  default:
   FUNC_1(VAR_2, "unrecognized buffer access strategy: %d",
     (int) VAR_5);
   return ((void*)0);
 }


 VAR_7 = FUNC_0(VAR_3 / 8, VAR_7);


 VAR_6 = (BufferAccessStrategy)
  FUNC_3(FUNC_2(VAR_1, VAR_4) +
    VAR_7 * sizeof(Buffer));


 VAR_6->btype = VAR_5;
 VAR_6->ring_size = VAR_7;

 return VAR_6;
}
