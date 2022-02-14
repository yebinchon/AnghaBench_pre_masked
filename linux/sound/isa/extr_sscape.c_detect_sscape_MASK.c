
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {scalar_t__ ic_type; scalar_t__ type; int lock; int io_base; } ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct soundscape *VAR_5, long VAR_6)
{
 unsigned long VAR_7;
 unsigned VAR_8;
 int VAR_9 = 0;

 FUNC_7(&VAR_5->lock, VAR_7);






 if ((FUNC_4(FUNC_0(VAR_5->io_base)) & 0x78) != 0)
  goto _done;

 VAR_8 = FUNC_4(FUNC_1(VAR_5->io_base)) & 0xf0;
 if ((VAR_8 & 0x80) != 0)
  goto _done;

 if (VAR_8 == 0)
  VAR_5->ic_type = VAR_1;
 else if ((VAR_8 & 0x60) != 0)
  VAR_5->ic_type = VAR_2;
 else
  goto _done;

 FUNC_6(0xfa, FUNC_1(VAR_5->io_base));
 if ((FUNC_4(FUNC_1(VAR_5->io_base)) & 0x9f) != 0x0a)
  goto _done;

 FUNC_6(0xfe, FUNC_1(VAR_5->io_base));
 if ((FUNC_4(FUNC_1(VAR_5->io_base)) & 0x9f) != 0x0e)
  goto _done;

 FUNC_6(0xfe, FUNC_1(VAR_5->io_base));
 VAR_8 = FUNC_4(FUNC_2(VAR_5->io_base));
 if (VAR_5->type != VAR_4 && (VAR_8 & 0x9f) != 0x0e)
  goto _done;

 if (VAR_5->ic_type == VAR_2)
  FUNC_3(VAR_5->io_base);

 if (VAR_5->type == VAR_4)
  VAR_6 += 4;

 VAR_8 = FUNC_9(VAR_5->io_base, VAR_0);
 FUNC_10(VAR_5->io_base, VAR_0, VAR_8 | 0xc0);


 for (VAR_8 = 0; VAR_8 < 500; VAR_8++) {
  if ((FUNC_4(VAR_6) & 0x80) == 0)
   break;
  FUNC_8(&VAR_5->lock, VAR_7);
  FUNC_5(1);
  FUNC_7(&VAR_5->lock, VAR_7);
 }

 if ((FUNC_4(VAR_6) & 0x80) != 0)
  goto _done;

 if (FUNC_4(VAR_6 + 2) == 0xff)
  goto _done;

 VAR_8 = FUNC_9(VAR_5->io_base, VAR_0) & 0x3f;
 FUNC_10(VAR_5->io_base, VAR_0, VAR_8);

 if ((FUNC_4(VAR_6) & 0x80) != 0)
  VAR_5->type = VAR_3;

 VAR_8 = FUNC_9(VAR_5->io_base, VAR_0);
 FUNC_10(VAR_5->io_base, VAR_0, VAR_8 | 0xc0);

 for (VAR_8 = 0; VAR_8 < 500; VAR_8++) {
  if ((FUNC_4(VAR_6) & 0x80) == 0)
   break;
  FUNC_8(&VAR_5->lock, VAR_7);
  FUNC_5(1);
  FUNC_7(&VAR_5->lock, VAR_7);
 }




 VAR_9 = 1;

_done:
 FUNC_8(&VAR_5->lock, VAR_7);
 return VAR_9;
}
