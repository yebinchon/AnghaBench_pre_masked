
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmap_rb_extent {void* count; void* start; } ;
typedef void* __u64 ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct bmap_rb_extent**) ;

__attribute__((used)) static void FUNC_2(struct bmap_rb_extent **VAR_0, __u64 VAR_1,
        __u64 VAR_2)
{
 struct bmap_rb_extent *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(sizeof (struct bmap_rb_extent),
    &VAR_3);
 if (VAR_4)
  FUNC_0();

 VAR_3->start = VAR_1;
 VAR_3->count = VAR_2;
 *VAR_0 = VAR_3;
}
