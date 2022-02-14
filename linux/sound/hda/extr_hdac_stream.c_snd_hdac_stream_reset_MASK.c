
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {scalar_t__* posbuf; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct hdac_stream*) ;
 unsigned char FUNC_1 (struct hdac_stream*,int ) ;
 int FUNC_2 (struct hdac_stream*,int ,int ,unsigned char) ;
 int FUNC_3 (struct hdac_stream*,int ,unsigned char) ;
 int FUNC_4 (int) ;

void FUNC_5(struct hdac_stream *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;

 FUNC_0(VAR_2);

 FUNC_2(VAR_2, VAR_0, 0, VAR_1);
 FUNC_4(3);
 VAR_4 = 300;
 do {
  VAR_3 = FUNC_1(VAR_2, VAR_0) &
   VAR_1;
  if (VAR_3)
   break;
 } while (--VAR_4);
 VAR_3 &= ~VAR_1;
 FUNC_3(VAR_2, VAR_0, VAR_3);
 FUNC_4(3);

 VAR_4 = 300;

 do {
  VAR_3 = FUNC_1(VAR_2, VAR_0) &
   VAR_1;
  if (!VAR_3)
   break;
 } while (--VAR_4);


 if (VAR_2->posbuf)
  *VAR_2->posbuf = 0;
}
