
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tab_cmd ;
typedef int space_cmd ;
typedef int shortpath_cmd ;
typedef int pwd_cmd ;
typedef int path_cmd ;
typedef int or_broken_cmd ;
typedef int drive_cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_11, const char *VAR_12, const char *VAR_13,
        const char *VAR_14)
{
    const char *VAR_15 = VAR_11, *VAR_16 = VAR_13;
    const char *VAR_17 = ((void*)0);

    static const char VAR_18[] = {'@','p','w','d','@'};
    static const char VAR_19[] = {'@','d','r','i','v','e','@'};
    static const char VAR_20[] = {'@','p','a','t','h','@'};
    static const char VAR_21[] = {'@','s','h','o','r','t','p','a','t','h','@'};
    static const char VAR_22[] = {'@','s','p','a','c','e','@'};
    static const char VAR_23[] = {'@','t','a','b','@'};
    static const char VAR_24[] = {'@','o','r','_','b','r','o','k','e','n','@'};

    while(VAR_16 < VAR_14) {
        if(*VAR_16 == '@') {
            if(VAR_16+sizeof(VAR_18) <= VAR_14
                    && !FUNC_2(VAR_16, VAR_18, sizeof(VAR_18))) {
                VAR_16 += sizeof(VAR_18);
                if(VAR_12-VAR_15 < VAR_10
                   || (FUNC_0(VAR_1, VAR_2, VAR_15, VAR_10,
                       VAR_9, VAR_10) != VAR_0)) {
                    VAR_17 = VAR_15;
                }else {
                    VAR_15 += VAR_10;
                    continue;
                }
            } else if(VAR_16+sizeof(VAR_19) <= VAR_14
                    && !FUNC_2(VAR_16, VAR_19, sizeof(VAR_19))) {
                VAR_16 += sizeof(VAR_19);
                if(VAR_12-VAR_15 < VAR_4
                   || (FUNC_0(VAR_1, VAR_2,
                                      VAR_15, VAR_4, VAR_3, VAR_4) != VAR_0)) {
                    VAR_17 = VAR_15;
                }else {
                    VAR_15 += VAR_4;
                    continue;
                }
            } else if(VAR_16+sizeof(VAR_20) <= VAR_14
                    && !FUNC_2(VAR_16, VAR_20, sizeof(VAR_20))) {
                VAR_16 += sizeof(VAR_20);
                if(VAR_12-VAR_15 < VAR_6
                   || (FUNC_0(VAR_1, VAR_2,
                                      VAR_15, VAR_6, VAR_5, VAR_6) != VAR_0)) {
                    VAR_17 = VAR_15;
                }else {
                    VAR_15 += VAR_6;
                    continue;
                }
            } else if(VAR_16+sizeof(VAR_21) <= VAR_14
                    && !FUNC_2(VAR_16, VAR_21, sizeof(VAR_21))) {
                VAR_16 += sizeof(VAR_21);
                if(VAR_12-VAR_15 < VAR_8
                   || (FUNC_0(VAR_1, VAR_2,
                                      VAR_15, VAR_8, VAR_7, VAR_8) != VAR_0)) {
                    VAR_17 = VAR_15;
                }else {
                    VAR_15 += VAR_8;
                    continue;
                }
            }else if(VAR_16+sizeof(VAR_22) <= VAR_14
                    && !FUNC_2(VAR_16, VAR_22, sizeof(VAR_22))) {
                VAR_16 += sizeof(VAR_22);
                if(VAR_15 < VAR_12 && *VAR_15 == ' ') {
                    VAR_15++;
                    continue;
                } else {
                    VAR_17 = VAR_12;
                }
            }else if(VAR_16+sizeof(VAR_23) <= VAR_14
                    && !FUNC_2(VAR_16, VAR_23, sizeof(VAR_23))) {
                VAR_16 += sizeof(VAR_23);
                if(VAR_15 < VAR_12 && *VAR_15 == '\t') {
                    VAR_15++;
                    continue;
                } else {
                    VAR_17 = VAR_12;
                }
            }else if(VAR_16+sizeof(VAR_24) <= VAR_14
                     && !FUNC_2(VAR_16, VAR_24, sizeof(VAR_24))) {
                if(VAR_15 == VAR_12)
                    return ((void*)0);
                else
                    VAR_17 = VAR_15;
            }else if(VAR_15 == VAR_12 || *VAR_15 != *VAR_16)
                VAR_17 = VAR_15;
        }else if(VAR_15 == VAR_12 || *VAR_15 != *VAR_16) {
            VAR_17 = VAR_15;
        }

        if(VAR_17) {
            if(!FUNC_1(1))
                return VAR_17;

            while(VAR_16+sizeof(VAR_24) <= VAR_14 && FUNC_2(VAR_16, VAR_24, sizeof(VAR_24)))
                VAR_16++;
            if(!VAR_16)
                return VAR_17;

            VAR_16 += sizeof(VAR_24);
            VAR_15 = VAR_11;
            VAR_17 = ((void*)0);
            continue;
        }

        VAR_16++;
        VAR_15++;
    }

    if(VAR_16 != VAR_14)
        return VAR_15;
    else if(VAR_15 != VAR_12)
        return VAR_14;

    return ((void*)0);
}
