
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ReadLineFlags ;
typedef int EndOfLineMarker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static EndOfLineMarker FUNC_1(char VAR_5, ReadLineFlags VAR_6) {

        if (!FUNC_0(VAR_6, VAR_4)) {
                if (VAR_5 == '\n')
                        return VAR_1;
                if (VAR_5 == '\r')
                        return VAR_2;
        }

        if (VAR_5 == '\0')
                return VAR_3;

        return VAR_0;
}
