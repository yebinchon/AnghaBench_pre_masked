
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {long batch; int flags; long (* count_objects ) (struct shrinker*,struct shrink_control*) ;unsigned long (* scan_objects ) (struct shrinker*,struct shrink_control*) ;int * nr_deferred; int seeks; } ;
struct shrink_control {int nid; unsigned long nr_to_scan; unsigned long nr_scanned; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (long,int *) ;
 long FUNC_1 (int *) ;
 long FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (unsigned long long,int ) ;
 void* FUNC_6 (long,long) ;
 int FUNC_7 (char*,unsigned long (*) (struct shrinker*,struct shrink_control*),long) ;
 long FUNC_8 (struct shrinker*,struct shrink_control*) ;
 unsigned long FUNC_9 (struct shrinker*,struct shrink_control*) ;
 int FUNC_10 (struct shrinker*,int,unsigned long,long,long,long) ;
 int FUNC_11 (struct shrinker*,struct shrink_control*,long,long,unsigned long long,long,int) ;

__attribute__((used)) static unsigned long FUNC_12(struct shrink_control *VAR_5,
        struct shrinker *VAR_6, int VAR_7)
{
 unsigned long VAR_8 = 0;
 unsigned long long VAR_9;
 long VAR_10;
 long VAR_11;
 long VAR_12;
 long VAR_13;
 int VAR_14 = VAR_5->nid;
 long VAR_15 = VAR_6->batch ? VAR_6->batch
       : VAR_1;
 long VAR_16 = 0, VAR_17;

 if (!(VAR_6->flags & VAR_0))
  VAR_14 = 0;

 VAR_11 = VAR_6->count_objects(VAR_6, VAR_5);
 if (VAR_11 == 0 || VAR_11 == VAR_2)
  return VAR_11;






 VAR_12 = FUNC_2(&VAR_6->nr_deferred[VAR_14], 0);

 VAR_10 = VAR_12;
 if (VAR_6->seeks) {
  VAR_9 = VAR_11 >> VAR_7;
  VAR_9 *= 4;
  FUNC_5(VAR_9, VAR_6->seeks);
 } else {





  VAR_9 = VAR_11 / 2;
 }

 VAR_10 += VAR_9;
 if (VAR_10 < 0) {
  FUNC_7("shrink_slab: %pS negative objects to delete nr=%ld\n",
         VAR_6->scan_objects, VAR_10);
  VAR_10 = VAR_11;
  VAR_17 = VAR_12;
 } else
  VAR_17 = VAR_10;
 if (VAR_9 < VAR_11 / 4)
  VAR_10 = FUNC_6(VAR_10, VAR_11 / 2);






 if (VAR_10 > VAR_11 * 2)
  VAR_10 = VAR_11 * 2;

 FUNC_11(VAR_6, VAR_5, VAR_12,
       VAR_11, VAR_9, VAR_10, VAR_7);
 while (VAR_10 >= VAR_15 ||
        VAR_10 >= VAR_11) {
  unsigned long VAR_18;
  unsigned long VAR_19 = FUNC_6(VAR_15, VAR_10);

  VAR_5->nr_to_scan = VAR_19;
  VAR_5->nr_scanned = VAR_19;
  VAR_18 = VAR_6->scan_objects(VAR_6, VAR_5);
  if (VAR_18 == VAR_3)
   break;
  VAR_8 += VAR_18;

  FUNC_4(VAR_4, VAR_5->nr_scanned);
  VAR_10 -= VAR_5->nr_scanned;
  VAR_16 += VAR_5->nr_scanned;

  FUNC_3();
 }

 if (VAR_17 >= VAR_16)
  VAR_17 -= VAR_16;
 else
  VAR_17 = 0;





 if (VAR_17 > 0)
  VAR_13 = FUNC_0(VAR_17,
      &VAR_6->nr_deferred[VAR_14]);
 else
  VAR_13 = FUNC_1(&VAR_6->nr_deferred[VAR_14]);

 FUNC_10(VAR_6, VAR_14, VAR_8, VAR_12, VAR_13, VAR_10);
 return VAR_8;
}
