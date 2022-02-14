
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_header {scalar_t__ hdr_signature; scalar_t__ hdr_version; } ;
typedef int gsize ;
typedef int GChecksum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char*,unsigned long) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cache_header *VAR_2, unsigned long VAR_3)
{
    GChecksum *VAR_4;
    unsigned char VAR_5[20];
    gsize VAR_6 = 20;

    if (VAR_2->hdr_signature != FUNC_6(VAR_0)) {
        FUNC_4("bad signature\n");
        return -1;
    }
    if (VAR_2->hdr_version != FUNC_6(2) && VAR_2->hdr_version != FUNC_6(3) &&
        VAR_2->hdr_version != FUNC_6(4)) {
        FUNC_4("bad index version\n");
        return -1;
    }
    VAR_4 = FUNC_2 (VAR_1);
    FUNC_3(VAR_4, (unsigned char *)VAR_2, VAR_3 - 20);
    FUNC_1 (VAR_4, VAR_5, &VAR_6);
    FUNC_0 (VAR_4);
    if (FUNC_5(VAR_5, (unsigned char *)VAR_2 + VAR_3 - 20)) {
        FUNC_4("bad index file sha1 signature\n");
        return -1;
    }
    return 0;
}
