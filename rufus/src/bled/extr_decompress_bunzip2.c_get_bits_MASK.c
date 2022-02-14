
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inbufBitCount; scalar_t__ inbufPos; scalar_t__ inbufCount; int* inbuf; int inbufBits; int jmpbuf; int in_fd; } ;
typedef TYPE_1__ bunzip_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static unsigned FUNC_2(bunzip_data *VAR_2, int VAR_3)
{
 unsigned VAR_4 = 0;

 int VAR_5 = VAR_2->inbufBitCount;



 while (VAR_5 < VAR_3) {


  if (VAR_2->inbufPos == VAR_2->inbufCount) {

   VAR_2->inbufCount = FUNC_1(VAR_2->in_fd, VAR_2->inbuf, VAR_0);
   if (VAR_2->inbufCount <= 0)
    FUNC_0(VAR_2->jmpbuf, VAR_1);
   VAR_2->inbufPos = 0;
  }


  if (VAR_5 >= 24) {
   VAR_4 = VAR_2->inbufBits & ((1 << VAR_5) - 1);
   VAR_3 -= VAR_5;
   VAR_4 <<= VAR_3;
   VAR_5 = 0;
  }


  VAR_2->inbufBits = (VAR_2->inbufBits << 8) | VAR_2->inbuf[VAR_2->inbufPos++];
  VAR_5 += 8;
 }


 VAR_5 -= VAR_3;
 VAR_2->inbufBitCount = VAR_5;
 VAR_4 |= (VAR_2->inbufBits >> VAR_5) & ((1 << VAR_3) - 1);

 return VAR_4;
}
