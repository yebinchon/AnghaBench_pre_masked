
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int dirty_ratelimit; int avg_write_bandwidth; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int ) ;
 long FUNC_1 (int,int) ;
 long FUNC_2 (long,int) ;
 unsigned long FUNC_3 (int) ;

__attribute__((used)) static long FUNC_4(struct bdi_writeback *VAR_2,
    long VAR_3,
    unsigned long VAR_4,
    unsigned long VAR_5,
    int *VAR_6)
{
 long VAR_7 = FUNC_0(VAR_2->avg_write_bandwidth);
 long VAR_8 = FUNC_0(VAR_2->dirty_ratelimit);
 long VAR_9;
 long VAR_10;
 int VAR_11;


 VAR_9 = FUNC_1(1, VAR_1 / 100);







 if (VAR_7 > VAR_8)
  VAR_9 += (VAR_7 - VAR_8) * (10 * VAR_1) / 1024;
 VAR_9 = FUNC_2(VAR_9, 1 + VAR_3 / 2);
 VAR_11 = VAR_5 * VAR_9 / FUNC_3(VAR_1);
 if (VAR_11 < VAR_0) {
  VAR_9 = VAR_3;
  VAR_11 = VAR_5 * VAR_9 / FUNC_3(VAR_1);
  if (VAR_11 > VAR_0) {
   VAR_11 = VAR_0;
   VAR_9 = VAR_1 * VAR_0 / VAR_5;
  }
 }

 VAR_10 = VAR_1 * VAR_11 / (VAR_4 + 1);
 if (VAR_10 > VAR_3) {
  VAR_9 = VAR_3;
  VAR_11 = VAR_4 * VAR_9 / FUNC_3(VAR_1);
 }

 *VAR_6 = VAR_11;



 return VAR_11 >= VAR_0 ? 1 + VAR_9 / 2 : VAR_9;
}
