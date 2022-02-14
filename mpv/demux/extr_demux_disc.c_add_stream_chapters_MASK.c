
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct demuxer*,char*,double,int ) ;
 int FUNC_1 (int ,int ,...) ;

__attribute__((used)) static void FUNC_2(struct demuxer *VAR_2)
{
    int VAR_3 = 0;
    if (FUNC_1(VAR_2->stream, VAR_1, &VAR_3) < 1)
        return;
    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        double VAR_5 = VAR_4;
        if (FUNC_1(VAR_2->stream, VAR_0, &VAR_5) < 1)
            continue;
        FUNC_0(VAR_2, "", VAR_5, 0);
    }
}
