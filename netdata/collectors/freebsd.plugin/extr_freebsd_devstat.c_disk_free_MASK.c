
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {struct disk* name; int st_svctm; int st_avagsz; int st_await; int st_iotime; int st_util; int st_qops; int st_ops; int st_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct disk*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct disk *VAR_1) {
    if (FUNC_1(VAR_1->st_io))
        FUNC_2(VAR_1->st_io);
    if (FUNC_1(VAR_1->st_ops))
        FUNC_2(VAR_1->st_ops);
    if (FUNC_1(VAR_1->st_qops))
        FUNC_2(VAR_1->st_qops);
    if (FUNC_1(VAR_1->st_util))
        FUNC_2(VAR_1->st_util);
    if (FUNC_1(VAR_1->st_iotime))
        FUNC_2(VAR_1->st_iotime);
    if (FUNC_1(VAR_1->st_await))
        FUNC_2(VAR_1->st_await);
    if (FUNC_1(VAR_1->st_avagsz))
        FUNC_2(VAR_1->st_avagsz);
    if (FUNC_1(VAR_1->st_svctm))
        FUNC_2(VAR_1->st_svctm);

    VAR_0--;
    FUNC_0(VAR_1->name);
    FUNC_0(VAR_1);
}
