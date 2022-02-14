
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct statvfs {scalar_t__ f_bsize; scalar_t__ f_bfree; } ;
typedef int sd_bus_error ;
typedef int fb_need ;
typedef int fb_available ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (char*,struct statvfs*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, sd_bus_error *VAR_5) {
        struct statvfs VAR_6;
        uint64_t VAR_7;

        if (FUNC_3("/run/systemd", &VAR_6) < 0)
                return FUNC_1(VAR_5, VAR_3, "Failed to statvfs(/run/systemd): %m");

        VAR_7 = (uint64_t) VAR_6.f_bfree * (uint64_t) VAR_6.f_bsize;

        if (VAR_7 < VAR_2) {
                char VAR_8[VAR_1], VAR_9[VAR_1];
                return FUNC_2(VAR_5,
                                         VAR_0,
                                         "%s, not enough space available on /run/systemd. "
                                         "Currently, %s are free, but a safety buffer of %s is enforced.",
                                         VAR_4,
                                         FUNC_0(VAR_8, sizeof(VAR_8), VAR_7),
                                         FUNC_0(VAR_9, sizeof(VAR_9), VAR_2));
        }

        return 0;
}
