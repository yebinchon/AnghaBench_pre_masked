
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {scalar_t__ recorder; } ;
typedef int AVPacket ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static bool
FUNC_2(struct stream *VAR_0, AVPacket *VAR_1) {
    if (VAR_0->recorder && !FUNC_1(VAR_0->recorder, VAR_1)) {
        FUNC_0("Could not send config packet to recorder");
        return 0;
    }
    return 1;
}
