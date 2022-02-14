
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,double,double,...) ;

__attribute__((used)) static void FUNC_1(double VAR_2, double VAR_3, double VAR_4) {
        long long VAR_5;


        FUNC_0("<rect class=\"box\" x=\"0\" y=\"0\" width=\"%.03f\" height=\"%.03f\" />\n",
            VAR_0 * (VAR_4 - VAR_3),
            VAR_1 * VAR_2);

        for (VAR_5 = ((long long) (VAR_3 / 100000)) * 100000; VAR_5 <= VAR_4; VAR_5 += 100000) {

                if (VAR_5 % 5000000 == 0)
                        FUNC_0("  <line class=\"sec5\" x1=\"%.03f\" y1=\"0\" x2=\"%.03f\" y2=\"%.03f\" />\n"
                            "  <text class=\"sec\" x=\"%.03f\" y=\"%.03f\" >%.01fs</text>\n",
                            VAR_0 * VAR_5,
                            VAR_0 * VAR_5,
                            VAR_1 * VAR_2,
                            VAR_0 * VAR_5,
                            -5.0,
                            0.000001 * VAR_5);
                else if (VAR_5 % 1000000 == 0)
                        FUNC_0("  <line class=\"sec1\" x1=\"%.03f\" y1=\"0\" x2=\"%.03f\" y2=\"%.03f\" />\n"
                            "  <text class=\"sec\" x=\"%.03f\" y=\"%.03f\" >%.01fs</text>\n",
                            VAR_0 * VAR_5,
                            VAR_0 * VAR_5,
                            VAR_1 * VAR_2,
                            VAR_0 * VAR_5,
                            -5.0,
                            0.000001 * VAR_5);
                else
                        FUNC_0("  <line class=\"sec01\" x1=\"%.03f\" y1=\"0\" x2=\"%.03f\" y2=\"%.03f\" />\n",
                            VAR_0 * VAR_5,
                            VAR_0 * VAR_5,
                            VAR_1 * VAR_2);
        }
}
